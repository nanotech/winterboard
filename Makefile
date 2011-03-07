ifeq ($(shell [ -f ./framework/makefiles/common.mk ] && echo 1 || echo 0),0)
all clean package install::
	git submodule update --init
	./framework/git-submodule-recur.sh init
	$(MAKE) $(MAKEFLAGS) MAKELEVEL=0 $@
else

SDKVERSION = 4.2

TWEAK_NAME = winterboard
winterboard_OBJC_FILES = Library.mm
winterboard_FRAMEWORKS = Foundation CoreFoundation CoreGraphics ImageIO UIKit
winterboard_PRIVATE_FRAMEWORKS = GraphicsServices

APPLICATION_NAME = WinterBoard
WinterBoard_OBJC_FILES = Application.mm
WinterBoard_FRAMEWORKS = Foundation CoreFoundation CoreGraphics UIKit
WinterBoard_PRIVATE_FRAMEWORKS = Preferences

include framework/makefiles/common.mk
include framework/makefiles/tweak.mk
include framework/makefiles/application.mk

endif
