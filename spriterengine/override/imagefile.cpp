#include <override/imagefile.h>

#include <global/global.h>
#include <objectinfo/universalobjectinterface.h>
#include <file/file.h>

namespace SpriterEngine
{

	ImageFile::ImageFile(std::string initialFilePath, point initialDefaultPivot) :
		File(initialFilePath),
		defaultPivot(initialDefaultPivot)
	{
	}

	ImageFile *ImageFile::imageFile()
	{
		return this;
	}

	void ImageFile::renderSprite(UniversalObjectInterface * spriteInfo)
	{
		// TODO: override and add custom rendering code here using:

		// spriteInfo->getAlpha()
		// spriteInfo->getPosition()
		// spriteInfo->getAngle()
		// spriteInfo->getScale()
		// spriteInfo->getPivot()
	}

}
