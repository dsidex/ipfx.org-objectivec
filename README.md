# ipfx.org-objectivec
Objective-C library which helps to work with ipfx.org animation interpolators. Feel free to contribute!

# Basic usage

1. go to (http://ipfx.org/)
2. create interpolator function
3. copy generated url (data is encoded in the url)
4. pass url as a parameter to IPFXInterpolator::parseUrl() method

## Super simple

```
#import "IPFXInterpolator.h"
...
IPFXInterpolator *interpolator = [IPFXInterpolator parseUrl:@"<urlData>"];
...
CGFloat y = [interpolator calc:x];
...
```
