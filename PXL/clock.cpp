#include "clock.h"

Clock::Clock()
{
	m_lastFrame = SDL_GetTicks();
	m_deltaTime = 0.0f;
}

void Clock::update()
{
	m_deltaTime = (SDL_GetTicks() - m_lastFrame) / 1000.0f;
	m_lastFrame = SDL_GetTicks();
}

Clock::~Clock()
{

}