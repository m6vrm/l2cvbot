#pragma once

#include <optional>
#include <string>
#include <Windows.h>
#include <opencv2/opencv.hpp>

class Window
{
public:
    static std::optional<cv::Rect> Rect(const std::string &window_title);

private:
    static std::optional<cv::Rect> HWNDRect(HWND hwnd);
    static std::optional<std::wstring> WidenString(const std::string &string);
};