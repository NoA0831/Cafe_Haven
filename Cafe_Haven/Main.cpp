#pragma once
#include "Common.hpp"
#include "TitleScene.hpp"

void Main()
{
	Window::Resize(WindowSize);
	Window::SetTitle(WindowName);

	App manager;

	manager.add<TitleScene>(State::Title);

	while (System::Update()){
		if (not manager.update()) {
			break;
		}
	}
}
