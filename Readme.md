# Development

## PlatformIO

See https://docs.platformio.org/en/latest/core/index.html

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
