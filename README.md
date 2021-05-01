# Universal-ImGui-D3D11-Hook-WithResize

A Universal DirectX11 hook that supports resizing of the game window by hooking the ResizeBuffers. Worked on this over the last week or 2. This includes ImGui for making in-game mod menus. Uses Kiero and MinHook for hooks.
Could be used for some cool UE4 related mod menus in the future. :)

How to use:
Just make your mod menu using ImGui, build and rename output file to dxgi.dll, dinput8.dll or xinput1_3.dll and drop it next to your UE4 game main exe.
Open and close menu with right-ALT if you didn't already change that.
