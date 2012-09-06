//
//  ECViewController.h
//  PhotoFX
//
//  Created by Eric Cheng on 9/5/12.
//  Copyright (c) 2012 Unilegend Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ECViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate> {
    UIImage *originalImage;
}

@property (nonatomic, weak) IBOutlet UIImageView *selectedImageView;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *filterButton;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *saveButton;

- (IBAction)photoFromAlbum;
- (IBAction)photoFromCamera;
- (IBAction)applyImageFilter:(id)sender;
- (IBAction)saveImageToAlbum;

@end
