#include "openvr.h"

#include <atomic>
#include <iostream>
#include <string>
#include <sstream>

#include <thread>
#include <mutex>

#include <filesystem>
#include <vector>

int main(int argc, char *argv[]) {
    vr::EVRInitError err = vr::VRInitError_None;
    vr::VR_Init(&err, vr::VRApplication_Scene);

    if (err != vr::VRInitError_None) {
        std::cout << "failed to init openvr! " << vr::VR_GetVRInitErrorAsEnglishDescription(err) << std::endl;
        return 1;
    }

	//do openvr things!

    return 0;
}
