#include "../include/arc_raiders_overlay_runtime.hpp"
#include <windows.h>
namespace arc_raiders_overlay {
std::atomic<bool> g_running{true};
void PollHotkeys(bool& m) noexcept { if(GetAsyncKeyState(VK_INSERT)&1)m=!m; if(GetAsyncKeyState(VK_END)&1)g_running=false; }
}
int main(){ bool m=true; while(arc_raiders_overlay::g_running){ arc_raiders_overlay::PollHotkeys(m); Sleep(6);} return 0; }
