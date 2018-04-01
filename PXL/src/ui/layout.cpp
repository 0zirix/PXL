#include "layout.h"

Layout::Layout(const std::string& name, const glm::vec2& position, const glm::vec2& size) : Widget(position, size)
{
	m_name = name;
}

void Layout::addWidget(Widget* widget)
{
	this->setWidgetWindow(widget);
	m_widgets.emplace_back(widget);
}

void Layout::setWidgetWindow(Widget* widget) 
{
	if (this->getWindow() != nullptr) 
	{
 		widget->setWindow(this->getWindow());

		std::vector<class Widget*> childs = widget->getChildren();

		for (unsigned int i = 0; i < childs.size(); i++)
			this->setWidgetWindow(childs[i]);
	}
}

void Layout::removeWidget(Widget* widget)
{
	m_widgets.erase(std::remove(m_widgets.begin(), m_widgets.end(), widget), m_widgets.end());
}

Layout::~Layout()
{

}
