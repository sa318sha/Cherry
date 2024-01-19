#include <Cherry.h>

class SandBox: public Cherry::Application
{
public:
	SandBox()
	{
		
	}
	~SandBox()
	{
		
	}
};
Cherry::Application* Cherry::CreateApplication()
{
	return new SandBox();
}