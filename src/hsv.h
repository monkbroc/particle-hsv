/* hsv library by Julien Vanier <jvanier@gmail.com>
 *
 * Original code from StackOverflow
 * http://stackoverflow.com/a/6930407/1901924
 */

struct RgbColor {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    RgbColor();
    RgbColor(unsigned char r, unsigned char g, unsigned char b);
};

struct HsvColor {
    unsigned char h;
    unsigned char s;
    unsigned char v;
    HsvColor();
    HsvColor(unsigned char h, unsigned char s, unsigned char v);
};

HsvColor RgbToHsv(RgbColor in);
RgbColor HsvToRgb(HsvColor in);
