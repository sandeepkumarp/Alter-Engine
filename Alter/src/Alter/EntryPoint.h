#pragma once

#ifdef AT_PLATFORM_WINDOWS

extern Alter::Application* Alter::CreateApplication();

int main(int argc, char** argv)
{
	Alter::Log::Init();
	AT_CORE_WARN("Initialized Core Logger");
	AT_INFO("Initialized Client Logger");

	auto app = Alter::CreateApplication();
	app->Run();
	delete app;
}
#endif // AT_P
