#include <Alter.h>

class Sanbox : public Alter::Application
{
public:
	Sanbox()
	{

	}
	~Sanbox()
	{

	}

};

Alter::Application* Alter::CreateApplication() {
	return new Sanbox();
}