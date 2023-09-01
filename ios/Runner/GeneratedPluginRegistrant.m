//
//  Generated file. Do not edit.
//

// clang-format off

#import "GeneratedPluginRegistrant.h"

#if __has_include(<fluttertoast/FluttertoastPlugin.h>)
#import <fluttertoast/FluttertoastPlugin.h>
#else
@import fluttertoast;
#endif

#if __has_include(<singularity_flutter/SingularityFlutterPlugin.h>)
#import <singularity_flutter/SingularityFlutterPlugin.h>
#else
@import singularity_flutter;
#endif

@implementation GeneratedPluginRegistrant

+ (void)registerWithRegistry:(NSObject<FlutterPluginRegistry>*)registry {
  [FluttertoastPlugin registerWithRegistrar:[registry registrarForPlugin:@"FluttertoastPlugin"]];
  [SingularityFlutterPlugin registerWithRegistrar:[registry registrarForPlugin:@"SingularityFlutterPlugin"]];
}

@end
