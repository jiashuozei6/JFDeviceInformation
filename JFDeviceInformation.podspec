#
# Be sure to run `pod lib lint JFDeviceInformation.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'JFDeviceInformation'
  s.version          = '0.0.1'
  s.summary          = 'JFDeviceInformation可以获取设备信息，设备级全局变量、拓展等...'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
                        获取用户设备信息，日志打印、钥匙串访问、设备级全局宏、全局变量、全局函数、拓展...
                       DESC

  s.homepage         = 'https://github.com/jiashuozei6/JFDeviceInformation'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jiashuozei6' => 'jiashuozei6@icloud.com' }
  s.source           = { :git => 'https://github.com/jiashuozei6/JFDeviceInformation.git', :tag => s.version.to_s }
  
  s.ios.deployment_target = '9.0'
  
  s.pod_target_xcconfig = { 'skip_validation' => true }

  s.preserve_paths = [
    "JFDeviceInformation/JFDeviceInformation.framework/*"
  ]

  s.xcconfig = {
    "FRAMEWORK_SEARCH_PATHS": "$(PODS_ROOT)"
  }

  s.vendored_frameworks = [
    'JFDeviceInformation/JFDeviceInformation.framework'
  ]
end
