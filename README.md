# Universal-ImGui-D3D11-Hook-WithResize

A Universal DirectX11 hook that supports resizing of the game window by hooking the ResizeBuffers. Worked on this over the last week or 2 and managed to put it together using different online resources. This includes ImGui for making in-game mod menus. Uses Kiero and MinHook for hooks.

How to use:
Just make your mod menu using ImGui, build and rename output file to dxgi.dll, dinput8.dll or xinput1_3.dll and drop it next to your main exe.
Open and close menu with right-ALT if you didn't already change that.


Few things added for quality of life since 1.0:
Added a timer tick rate that always polls the controlls 30 times a second for consistency. | Update 1.1
FileDialog : Made by aiekick. | Update 1.2
Updated ImGui to latest version. | Update 1.2


This project is based on previous work by:
Rebzzel and Sh0ckFR
