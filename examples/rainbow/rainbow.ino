/* Animate the RGB LED in a rainbow pattern by going through the hue
 *
 * Example for the hsv library by Julien Vanier <jvanier@gmail.com>.
 */

#include "hsv.h"

SYSTEM_THREAD(ENABLED);

uint8_t hue = 0;

void setup() {
    RGB.control(true);
}

void loop() {
    HsvColor hsv(hue, 255, 255);
    RgbColor rgb = HsvToRgb(hsv);

    RGB.color(rgb.r, rgb.g, rgb.b);
    hue++;
    delay(10);
}
