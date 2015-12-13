#include <timeinfo/instanteasingcurve.h>

#include <global/global.h>

namespace SpriterEngine
{

	InstantEasingCurve::InstantEasingCurve()
	{
	}


	SpriterEngine::real SpriterEngine::InstantEasingCurve::adjustedTimeRatio(SpriterEngine::real timeRatio)
	{
		if (timeRatio > 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	EasingCurveInterface * InstantEasingCurve::clone()
	{
		return new InstantEasingCurve();
	}

}
