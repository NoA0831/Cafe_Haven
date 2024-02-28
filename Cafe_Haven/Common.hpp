# pragma once
# include <Siv3D.hpp>

const Size WindowSize{ 1000 , 600 };
const String WindowName = U"Cafe Haven";
const String AppName = U"Cafe Haven";

enum class State {
	Title,
	Shop,
	Cooking,
	Mission,
	Histrory,
	Research
};
struct GameData {
	
};

using App = SceneManager<State, GameData>;
