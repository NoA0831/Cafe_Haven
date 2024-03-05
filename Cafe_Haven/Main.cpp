#pragma once
#include "Common.hpp"
#include "Resource.hpp"
#include "TitleScene.hpp"
#include "ShopScene.hpp"

void Main()
{
	Window::Resize(WindowSize);
	Window::SetTitle(WindowName);

	ResourceRegister();

	FontAsset::Register(U"d-font",24, U"example/font/DotGothic16/DotGothic16-Regular.ttf",FontStyle::Bitmap);

	App manager;

	manager.add<TitleScene>(State::Title);
	manager.add<ShopScene>(State::Shop);

	manager.init(State::Shop);

	while (System::Update()){
		if (not manager.update()) {
			break;
		}
	}
}
