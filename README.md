
# Command & Conquer Generals (inc. Zero Hour) Source Code

This branch is focused getting the original code to compile with Visual C++ 6.0 with minimal changes.  Currently focusing efforts on the `GeneralsMD` directory (Zero Hour).


## Projects Currently Building (in Debug):

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
- [x] RTS
- [x] WorldBuilder


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

If you intend to debug with VS 6.0, [these instructions](https://stackoverflow.com/questions/2110759/how-to-debug-with-visual-c-6-on-windows-7-x64) show how to fix an issue where the application remains stuck after debugging.

### Compression Library Sources

Download ZLib 1.1.4 from the [ZLib Fossils](https://www.zlib.net/fossils/) page and place the contents in `\Code\Libraries\Source\Compression\ZLib\`.

Download the LZHL files from the [rFactorTools](https://github.com/Grumbel/rfactortools/tree/master/other/quickbms/src/libs/lzhl) project and place all the files in `\Code\Libraries\Source\Compression\LZHCompress\CompLibSource` and a copy of the headers in `CompLibHeader`.

In the LZHL source, add this line to the top of `lzhl_tcp.cpp` to suppress the debug info warning:
```
#pragma warning(disable: 4786)  // don't warn about debug info truncation
```


### STLPort

Download 4.5.3 here [STLport-4.5.3.tar.gz](http://www.stlport.org/archive/STLport-4.5.3.tar.gz).

Within the tar file, extract the contents of just the `stlport` directory and place the files in `\Code\Libraries\STLport-4.5.3`.

In that directory, run the following to patch the files:
```
patch -p0 < ../../../../../stlport.diff
```


### DirectX 9

An older version of DirectX SDK is needed that includes the full set of DirectX 8 headers.  Download the windows executable option from [Archive.org](https://archive.org/details/dx9sdk).  Extract the contents to a directory of your choosing, and then copy the `Lib` and `Include` directories to `\Code\Libraries\DirectX`.


### NVAsm

Place `nvasm.exe` from [The Wayback Machine](https://web.archive.org/web/20061006093538/http://developer.nvidia.com/object/nvasm.html) in `\Code\Tools\NVASM\`.


### Debug Helper

**TODO** document and link to the specific `DbgHelp.h` and `DbgHelp.Lib`


### Opening the Project

Open Visual C++, click *File->Open Workspace...*, and then select the `\Code\RTS.dsw` file.


### Building a Project

- Click the FileView tab
- In the build toolbar, select "Win32 Debug"
- Right-click the RTS project and select the "Build". When the build is complete you should see:
```
RTSD.exe - 0 error(s), 0 warning(s)
```


### Running

- **one-time only** Install the Steam version of both Generals and Zero Hour.  Launch each game once so the appropriate Windows registry keys are setup.
- Copy these files and directories from the Steam copy of Zero Hour to the `Run` directory:
-- all of the `.big` files
-- `Install_Final.bmp`
-- `mss32.dll`
-- `Data` directory
-- `MSS` directory
- Double-click `RTSD.exe` to launch the game and play!


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

- includes a modified version of the Miles stub library created by OmniBlade
- includes an X macro setup to dynamically link with the audio library
- disable call to `AIL_MSS_version()`
- define `u32` in `BinkVideoPlayer.cpp`


### BinkStub

- includes the stub files created by OmniBlade

### buildVersionUpdate and versionUpdate

- Output executables are renamed to buildVersionUpd.exe and versionUpd.exe to prevent an UAC prompt after every compilation of the RTS project. (Those binaries are just for building)

## License

This repository and its contents are licensed under the GPL v3 license, with additional terms applied. Please see [LICENSE.md](LICENSE.md) for details.
