# MandoRizer

Simple multi-task randomizer.

![image](https://github.com/Nicolas-Soares/MandoRizer2/assets/71686515/4ca1222f-7a7a-4f59-8242-9693acfdbdc3)

It has the following options:

- Pick random number between MIN and MAX;
- Pick random name within list;
- Pick random number within list;
- List shuffle;

## Dependencies

- [MSBuild](https://visualstudio.microsoft.com/pt-br/downloads/)
    - Scroll down to the bottom of the page > Tools for Visual Studio > Build Tools for Visual Studio 2022;
    
    This way you just install MSBuild without needing to install Visual Studio. If you already have Visual Studio installed on your machine, this is not necessary, although, MSBuild needs to be in your PATH env variable.

## Quick start
### Build the app

```
msbuild MandoRizer.vcxproj
```

### Run the app
```
start ./Debug/MandoRizer.exe
```