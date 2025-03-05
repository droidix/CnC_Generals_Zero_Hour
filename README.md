
# Command & Conquer Generals (inc. Zero Hour) Source Code

This branch is focused getting the original code to compile with Visual C++ 6.0 with minimal changes.  Currently focusing efforts on the `GeneralsMD` directory.

## Projects Currently Building:

- [x] Compression
- [x] EABrowserDispatch
- [x] GameEngine
- [x] GameEngineDevice
- [x] ww3d2
- [x] wwdebug
- [x] WWDownload
- [x] wwlib
- [x] wwmath
- [x] wwsaveload
- [x] wwshade
- [x] wwutil
- [x] launcher
- [ ] RTS


## HOWTO

This section logs the steps taken to get to this point on Windows 10 Professional.


### Git on Windows Tip

My initial Git configuration had all line endings converted to `LF`, but that messes up the VC++6 project files when cloning them down (since all of the `CR`s are stripped).  Changing my config to the following alleviated this.

```
[core]
    autocrlf = true
```


### Installing Visual C++ 6.0

These instructions to [Install Visual Studio 6.0 on Windows 10](https://www.codeproject.com/Articles/1191047/Install-Visual-Studio-6-0-on-Windows-10) were helpful.  I just had the Visual C++ 6.0 ISO instead of the full Visual Studio.

For service pack 6, acquire `Vs6sp6.exe` (mine had a SHA256 of `7fa1d1778824b55a5fceb02f45c399b5d4e4dce7403661e67e587b5f455edbf3`).


### Compression Library Sources

Download ZLib 1.1.4 from the [ZLib Fossils](https://www.zlib.net/fossils/) page and place the contents in `\Code\Libraries\Source\Compression\ZLib\`.

Download the LZHL files from the [rFactorTools](https://github.com/Grumbel/rfactortools/tree/master/other/quickbms/src/libs/lzhl) project and place the contents in `\Code\Libraries\Source\Compression\LZHCompress\CompLibSource` and `CompLibHeader`.

In the LZHL source, add this line to the top of `lzhl_tcp.cpp` to suppress the debug info warning:
```
#pragma warning(disable: 4786)  // don't warn about debug info truncation
```


### STLPort

Download 4.5.3 here [STLport-4.5.3.tar.gz](http://www.stlport.org/archive/STLport-4.5.3.tar.gz).

Place the contents of `stlport` in `\Code\Libraries\STLport-4.5.3`.

In that directory, run the following to patch the files:
```
patch -p0 < ../../../../../stlport.diff
```


### DirectX 9

An older version of DirectX SDK is needed that includes the full set of DirectX 8 headers.  Download the windows executable option from [Archive.org](https://archive.org/details/dx9sdk).  Extract the contents to a directory of your choosing, and then copy the `Lib` and `Include` directories to `\Code\Libraries\DirectX`.


### NVAsm

Place `nvasm.exe` from [The Wayback Machine](https://web.archive.org/web/20061006093538/http://developer.nvidia.com/object/nvasm.html) in `\Code\Tools\NVASM\`.


### Stub Libraries for Bink and Miles

Get `.c` and `.h` files created by OmniBlade from [This Github Repo](https://github.com/jmacato/CnC_Generals_Zero_Hour/tree/main/Dependencies) and place in `\Code\Libraries\Source\Stubs\Bink\` and `Code\Libraries\Source\Stubs\Miles\`

Change third parameter of this function from the Miles stub from from int to long:
```
int __stdcall AIL_decompress_ADPCM(const AILSOUNDINFO *info, void **outdata, unsigned int *outsize)
```

### Building a Project

Right-click the project and select the "Build" option.


## Changes Included in This Branch

### (Multiple Projects, Where Applicable)

- added ` /I "..\Libraries\Source\STLport-4.5.3" ` to the build settings
- added ` /I "..\Libraries\DirectX\Include" ` to the build settings
- added ` /I "..\Libraries\Source\Stubs\Bink" ` to the build settings
- added ` /I "..\Libraries\Source\Stubs\Miles" ` to the build settings
- removed ` /I "..\Libraries\Include\MSS" ` from the build settings


### Benchmark

- removed project from workspace as the implementation of RunBenchmark was not present


### GameEngine

- introduced the `GAMESPY_DISABLED` preprocessor define to disable code that uses the GameSpy SDK


### GameEngineDevice

- use stub libraries for Bink and Miles
- disable call to `AIL_MSS_version()`
- define `u32` in `BinkVideoPlayer.cpp`


## License

This repository and its contents are licensed under the GPL v3 license, with additional terms applied. Please see [LICENSE.md](LICENSE.md) for details.
