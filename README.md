
# Command & Conquer Generals (inc. Zero Hour) Source Code

This branch is focused getting the original code to compile with Visual C++ 6.0 with minimal changes.  Currently focusing efforts on the `GeneralsMD` directory.

## Projects Currently Building:

- [x] Benchmark
- [x] Compression
- [x] EABrowserDispatch
- [x] GameEngine
- [ ] GameEngineDevice
- [ ] RTS
- [ ] (many more)


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


### Benchmark Library Source

Download the BYTEmark beta source from the [BYTE Benchmarks](https://www.math.utah.edu/~mayer/linux/byte/index.html) page and place the contents in `\Code\Libraries\Source\Benchmark`.


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


### GameSpy

Download the `src/GameSpy` directory from the [GameSpy](https://github.com/nitrocaster/GameSpy/tree/master/src/GameSpy) project and place it in `\Code\Libraries\Source\GameSpy\`.


### GameEngine Project Settings

**NOTE:** these changes are committed in this branch

- added ` /I "..\Libraries\Source\STLport-4.5.3" ` to the build settings
- excluded the `Source Files\GameNetwork\GameSpy` directory from the build


## License

This repository and its contents are licensed under the GPL v3 license, with additional terms applied. Please see [LICENSE.md](LICENSE.md) for details.
