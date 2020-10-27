//
// Created by Keirb on 26/10/2020.
//

#ifndef DOTELREBORN_TEST_HPP
#define DOTELREBORN_TEST_HPP

#include <vulkan/vulkan.h>
#include <VkBootstrap.h>
#include <stb.h>
#include <vk_mem_alloc.h>
#include <SDL.h>

class Test {
public:
    void te() {
        SDL_Init(SDL_INIT_VIDEO);
    }

private:
    VkDevicePrivateDataCreateInfoEXT test;
};


#endif //DOTELREBORN_TEST_HPP
