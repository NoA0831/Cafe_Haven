#include "ShopScene.hpp"

ShopScene::ShopScene(const InitData& init)
	: IScene{ init } {}

void ShopScene::update() {

}

void ShopScene::draw() const {

	//研究シーンへのボタン
	RectF{ WindowSize.x * 0.3 - 85,WindowSize.y - 55,170,60 }.rounded(10).draw(Palette::Black).drawFrame(2, Palette::Black);
	TextureAsset(U"ResearchPoint").scaled(0.035).drawAt(WindowSize.x * 0.3 - 45, WindowSize.y - 28);
	FontAsset(U"d-font")(U"研究").drawAt(WindowSize.x * 0.3, WindowSize.y - 30, Palette::White);

	//調理シーンへのボタン
	RectF{ WindowSize.x * 0.5 - 85,WindowSize.y - 55,170,60 }.rounded(10).draw(Palette::Black).drawFrame(2, Palette::Black);
	TextureAsset(U"Nabe").scaled(0.07).drawAt(WindowSize.x * 0.5 - 45, WindowSize.y - 33);
	FontAsset(U"d-font")(U"調理").drawAt(WindowSize.x * 0.5, WindowSize.y - 35, Palette::White);

	//課題シーンへのボタン
	RectF{ WindowSize.x * 0.7 - 85,WindowSize.y - 55,170,60 }.rounded(10).draw(Palette::Black).drawFrame(2, Palette::Black);
	TextureAsset(U"Jewelry").scaled(0.06).drawAt(WindowSize.x * 0.7 - 45, WindowSize.y - 32);
	FontAsset(U"d-font")(U"実績").drawAt(WindowSize.x * 0.7, WindowSize.y - 35, Palette::White);
}
