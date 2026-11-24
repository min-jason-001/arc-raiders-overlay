#pragma once
#include <atomic>
#include <windows.h>
namespace arc_raiders_overlay { extern std::atomic<bool> g_running; void PollHotkeys(bool&) noexcept; }
