ifeq ($(shell [ -f ./framework/makefiles/common.mk ] && echo 1 || echo 0),0)
all clean package install::
	git submodule update --init
	./framework/git-submodule-recur.sh init
	$(MAKE) $(MAKEFLAGS) MAKELEVEL=0 $@
else

SDKVERSION = 4.2

TWEAK_NAME = winterboard
winterboard_FILES = Library.mm
winterboard_FRAMEWORKS = Foundation CoreFoundation CoreGraphics ImageIO UIKit
winterboard_PRIVATE_FRAMEWORKS = GraphicsServices

APPLICATION_NAME = WinterBoard
WinterBoard_FILES = Application.mm
WinterBoard_FRAMEWORKS = Foundation CoreFoundation CoreGraphics UIKit
WinterBoard_PRIVATE_FRAMEWORKS = Preferences

BUNDLE_NAME = WinterBoardSettings
WinterBoardSettings_FILES = Settings.mm
WinterBoardSettings_FRAMEWORKS = Foundation CoreFoundation CoreGraphics UIKit
WinterBoardSettings_PRIVATE_FRAMEWORKS = Preferences
WinterBoardSettings_INSTALL_PATH = /System/Library/PreferenceBundles

include framework/makefiles/common.mk
include framework/makefiles/tweak.mk
include framework/makefiles/application.mk
include framework/makefiles/bundle.mk

endif
