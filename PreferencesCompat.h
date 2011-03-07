/* WinterBoard - Theme Manager for the iPhone
 * Copyright (C) 2008-2009  Jay Freeman (saurik)
*/

/*
 *        Redistribution and use in source and binary
 * forms, with or without modification, are permitted
 * provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the
 *    above copyright notice, this list of conditions
 *    and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the
 *    above copyright notice, this list of conditions
 *    and the following disclaimer in the documentation
 *    and/or other materials provided with the
 *    distribution.
 * 3. The name of the author may not be used to endorse
 *    or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#import <Preferences/PSRootController.h>
#import <Preferences/PSViewController.h>
#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>

@interface PSRootController (Compatibility)
- (id) _popController; // < 3.2
- (id) contentView; // < 3.2
- (id) lastController; // < 3.2
- (id) topViewController; // >= 3.2
- (void) loadView; // >= 3.2
- (void) pushViewController:(PSListController *)vc animated:(BOOL)animated; // >= 3.2
- (void) popViewControllerAnimated:(BOOL)animated; // >= 3.2
@end

@interface PSListController (Compatibility)
- (void) viewWillBecomeVisible:(void *)specifier; // < 3.2
- (void) viewWillAppear:(BOOL)a; // >= 3.2
- (void) alertSheet:(UIActionSheet *)sheet buttonClicked:(int)i; // >= 3.2
- (void) setSpecifier:(PSSpecifier *)spec; // >= 3.2
@end
