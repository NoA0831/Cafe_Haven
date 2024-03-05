#include "ShopScene.hpp"

ShopScene::ShopScene(const InitData& init)
	: IScene{ init } {}

void ShopScene::update() {

}

void ShopScene::draw() const {

	//研究シーンへのボタン
	TextureAsset(U"ResearchPoint").scaled(0.06).drawAt(WindowSize.x * 0.3 - 45, WindowSize.y - 40);
	FontAsset(U"d-font")(U"研究").drawAt(WindowSize.x * 0.3, WindowSize.y - 40, Palette::White);

	//調理シーンへのボタン
	TextureAsset(U"Nabe").scaled(0.05).drawAt(WindowSize.x * 0.5 - 45, WindowSize.y - 40);
	FontAsset(U"d-font")(U"調理").drawAt(WindowSize.x * 0.5, WindowSize.y - 40, Palette::White);

	//課題シーンへのボタン
	TextureAsset(U"Jewelry").scaled(0.05).drawAt(WindowSize.x * 0.7 - 45, WindowSize.y - 40);
	FontAsset(U"d-font")(U"実績").drawAt(WindowSize.x * 0.7, WindowSize.y - 40, Palette::White);
}
