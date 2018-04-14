#pragma once

#include "../scene/scene.h"
#include "../core/display.h"
#include "../ui/core/guiManager.h"

class GuiRenderer
{
public:
	GuiRenderer(GuiManager* guiManager, Display* window);
	~GuiRenderer();

	void updateWidget(Widget* widget, double delta);
	void render(Scene* scene, double delta);
	void renderLayout(Layout* layout, double delta);

private:
	Display* m_window;
	GuiManager* m_guiManager;
};