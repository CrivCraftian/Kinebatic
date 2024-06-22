#pragma once

#ifdef KB_PLATFORM_WINDOWS

extern Kinebatic::Application* Kinebatic::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Kinebatic::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Kinebatic only supports Windows!
#endif // KB_PLATFORM_WINDOWS
