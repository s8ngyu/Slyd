#import "../Common.h"
#import <Cephei/HBPreferences.h>

@interface SBDashBoardPageControl : UIView 
-(void)stuStateChanged;
@end

@interface SBDashBoardTodayContentView : UIView 
-(void)stuStateChanged;
@end

@interface SBDashBoardViewController : UIViewController
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;

@end

@interface SBPagedScrollView : UIView
@property (assign,nonatomic) NSUInteger currentPageIndex;
-(BOOL)resetContentOffsetToCurrentPage;
-(void)_layoutScrollView;
-(void)layoutPages;
-(void)layoutSubviews;
-(void)setCurrentPageIndex:(NSUInteger)idx;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_bs_didEndScrolling;
-(void)_bs_didScrollWithContext:(id)arg1 ;
-(double)pageRelativeScrollOffset;

@end

@interface SBDashBoardMainPageView : UIView
@property (nonatomic, retain) _UIGlintyStringView *stuGlintyStringView;
-(void)stuStateChanged;

@end

@interface SBDashBoardTeachableMomentsContainerViewController : UIViewController
-(void)stuStateChanged;
@end

@interface SBUIPasscodeLockNumberPad : UIView

-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_cancelButtonHit;

@end

@interface SBDashBoardFixedFooterViewController : UIViewController {

	NSString* _cachedMesaFailureText;
	BOOL _temporaryMesaFailureTextActive;
	BOOL _authenticatedSinceFingerOn;

}

@property (nonatomic,readonly) UIView * fixedFooterView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(void)dashBoardStatusTextViewControllerContentDidChange:(id)arg1 ;
-(UIView *)fixedFooterView;
-(void)updateCallToActionForMesaMatchFailure;
-(void)_addCallToAction;
-(void)_addStatusTextViewControllerIfNecessary;
-(void)_updateCallToActionTextAnimated:(BOOL)arg1 ;
-(id)init;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)stuStateChanged;
@end

@interface UIApplication(STU)

-(void)_simulateHomeButtonPress;

@end

@interface SBCoverSheetSlidingViewController : UIViewController

-(void)_handleDismissGesture:(id)arg1 ;
-(void)setPresented:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;

@end

@interface SBCoverSheetPrimarySlidingViewController : SBCoverSheetSlidingViewController

@end