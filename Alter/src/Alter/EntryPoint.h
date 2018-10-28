#pragma once

#ifdef AT_PLATFORM_WINDOWS

extern Alter::Application* Alter::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Alter::CreateApplication();
	app->Run();
	delete app;
}
#endif // AT_P
