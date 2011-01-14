#pragma once

//--------------------------
// utils
#include "ofConstants.h"
#include "ofFileUtils.h"
#include "ofSystemUtils.h"
#include "ofThread.h"
#include "ofURLFileLoader.h"
#include "ofUtils.h"

//--------------------------
// types
#include "ofBaseTypes.h"
#include "ofTypes.h"
#include "ofColor.h"
#include "ofPoint.h"
#include "ofRectangle.h"

//--------------------------
// math
#include "ofMath.h"
#include "ofVectorMath.h"

//--------------------------
// communication
#ifndef TARGET_OF_IPHONE
	#include "ofSerial.h"
	#include "ofArduino.h"
#endif

//--------------------------
// graphics
#include "ofTexture.h"
#include "ofTrueTypeFont.h"
#include "ofGraphics.h"
#include "ofImage.h"
#include "ofFbo.h"
#include "ofShader.h"
#include "ofPixels.h"

//--------------------------
// app
#include "ofBaseApp.h"
#include "ofAppRunner.h"

//--------------------------
// audio
#include "ofSoundStream.h"
#include "ofSoundPlayer.h"
#ifndef TARGET_OF_IPHONE			//(temp for now, until this is ported)
	#include "ofSoundUnit.h"
	#include "ofSoundEffect.h"
#endif

//--------------------------
// video
#ifndef TARGET_OF_IPHONE			//(temp for now, until this is ported)
	#include "ofVideoGrabber.h"
	#include "ofVideoPlayer.h"
#endif

//--------------------------
// events
#include "ofEvents.h"

//--------------------------
// events
#include "of3d.h"

