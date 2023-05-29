# Play music with an Arduino and a buzzer

Very simple code to play some simple music over a buzzer connected to an Arduino.

# Usage

Hook up the buzzer on the pin specified in `src/main.cpp` and select which tune to
play by calling it in the `setup()` function, then upload and enjoy!

# Development

The code is compiled with [PlatformIO](https://docs.platformio.org/en/latest/core/index.html)
but it should compile just fine with Arduino IDE as well, provided that you put the headers
and source files in the right folders.

### Build

```sh
pio run
```

### Upload

```sh
pio run -t upload
```

### LSP setup

To have clangd properly recognizing includes run

```sh
pio run -t compiledb
```

This will generate a `compile_commands.json` file which clangd can use to
understand how each compilation unit should be compiled. Among other things
it will also list the include paths pointing to the necessary libraries
according to the target platform.

For more details refer to https://docs.platformio.org/en/latest/integration/compile_commands.html
