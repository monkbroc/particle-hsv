# hsv

A Particle library to convert color values between red green blue (RGB) and hue saturation value (HSV).

## Usage

Add the hsv library to your project and follow this simple example:

```
#include "hsv.h"

HsvColor hsv(hue, 255, 255);
RgbColor rgb = HsvToRgb(hsv);
```

Flash a full example that animates the RGB LED in a rainbow pattern.
```
particle flash <my_device> examples/rainbow
```

See the [examples](examples) folder for more details.

## Documentation

### `RgbColor`

Structure with red, green, blue colors.

```
// Create black
RgbColor rgb;
// Create with color
RgbColor rgb(255, 255, 0);
// Extract colors
RGB.color(rgb.r, rgb.g, rgb.b);
```

### `HsvColor`

Structure with hue, saturation, value colors.

```
// Create black
HsvColor hsv;
// Create with color
HsvColor hsv(255, 255, 0);
// Extract colors
unsigned char hue = hsv.h;
unsigned char saturation = hsv.s;
unsigned char value = hsv.v;
```

### `HsvToRgb`, `RgbToHsv`

Convert between the 2 color types.

```
HsvColor hsv = RgbToHsv(rgb);
RgbColor rgb = HsvToRgb(hsv);
```

## Contributing

Here's how you can make changes to this library and eventually contribute those changes back.

To get started, [clone the library from GitHub to your local machine](https://help.github.com/articles/cloning-a-repository/).

Change the name of the library in `library.properties` to something different. You can add your name at then end.

Modify the sources in <src> and <examples> with the new behavior.

To compile an example, use `particle compile examples/usage` command in [Particle CLI](https://docs.particle.io/guide/tools-and-features/cli#update-your-device-remotely) or use our [Desktop IDE](https://docs.particle.io/guide/tools-and-features/dev/#compiling-code).

After your changes are done you can upload them with `particle library upload` or `Upload` command in the IDE. This will create a private (only visible by you) library that you can use in other projects. Do `particle library add hsv_myname` to add the library to a project on your machine or add the hsv_myname library to a project on the Web IDE or Desktop IDE.

At this point, you can create a [GitHub pull request](https://help.github.com/articles/about-pull-requests/) with your changes to the original library. 

If you wish to make your library public, use `particle library publish` or `Publish` command.

## LICENSE
Copyright 2016 Julien Vanier <jvanier@gmail.com>

Licensed under the <insert your choice of license here> license
