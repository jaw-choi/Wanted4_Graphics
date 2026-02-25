#pragma once
#include <Windows.h>
#include <string>
#include <stdint.h>

namespace Craft
{
    // WIN32 API로 생성하는 창 클래스.
    class Win32Window
    {
    public:
        Win32Window(uint32_t width = 1280, uint32_t height = 800, HINSTANCE instance = nullptr, WNDPROC messageProcedure = nullptr);
        ~Win32Window();

        bool Initialize();
        // Getter.
        inline uint32_t Width() const { return width; }
        inline uint32_t Height() const { return height; }
        inline HWND Handle() const { return handle; }

    private:
        // Title
        std::wstring title;

        // 창 들록 할 때 사용할 클래스 이름
        std::wstring className = L"Craft Engine Class";

        //size
        uint32_t width = 0;
        uint32_t height = 0;

        HWND handle = nullptr;

        HINSTANCE instance = nullptr;

        WNDPROC messageProcedure = nullptr;
    };
}

