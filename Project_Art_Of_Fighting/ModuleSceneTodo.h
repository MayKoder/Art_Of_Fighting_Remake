#ifndef __MODULESCENETODO_H__
#define __MODULESCENETODO_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

struct SDL_Texture;
struct Mix_Music;
class ModuleSceneTodo : public Module
{
public:
	ModuleSceneTodo();
	~ModuleSceneTodo();
	bool Start();
	update_status Update();
	bool CleanUp();

public:
	Mix_Music * todo_music = nullptr;
	SDL_Texture* graphics = nullptr;
	RectSprites rect_background;

	Collider* BackPanel;
	Collider* FrontPanel;
	SDL_Texture* indicator_fight;
	Animation winp2;
	Animation winp1;
	int win_p1;
	int win_p2;
	Animation nthng;
	RectSprites indicator;
	RectSprites timeup;
	Animation *current_animation =nullptr;
	int tick1 = 0, tick2 = 0, tick3 = 0;
	int rounds_counter = 0;
};

#endif // __MODULESCENEKEN_H__