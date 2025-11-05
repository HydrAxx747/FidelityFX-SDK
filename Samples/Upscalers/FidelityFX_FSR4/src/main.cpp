#include <iostream>
#include "ffx_upscale.h"

int main() {
    std::cout << "FSR Upscale API Effect ID (hex): 0x" << std::hex << FFX_API_EFFECT_ID_UPSCALE << std::dec << std::endl;
    std::cout << "Flags available (examples):" << std::endl;
    std::cout << " - FFX_UPSCALE_ENABLE_HIGH_DYNAMIC_RANGE : " << (FFX_UPSCALE_ENABLE_HIGH_DYNAMIC_RANGE != 0) << std::endl;
    std::cout << " - FFX_UPSCALE_ENABLE_NON_LINEAR_COLORSPACE : " << (FFX_UPSCALE_ENABLE_NON_LINEAR_COLORSPACE != 0) << std::endl;
    std::cout << "Dispatch flags example: FFX_UPSCALE_FLAG_DRAW_DEBUG_VIEW = " << (FFX_UPSCALE_FLAG_DRAW_DEBUG_VIEW != 0) << std::endl;
    return 0;
}
