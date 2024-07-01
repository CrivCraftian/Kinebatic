#pragma once

#ifdef KB_PLATFORM_WINDOWS

extern kb::Application* kb::CreateApplication();

int main(int argc, char** argv)
{
	auto app = kb::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Kinebatic only supports Windows!
#endif // KB_PLATFORM_WINDOWS
