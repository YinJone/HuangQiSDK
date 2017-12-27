Pod::Spec.new do |s|

s.name         = "HuangQiSDK"
s.version = "1.0.5"
s.summary      = "This is the Fon SDK Connect for iOS devices."
s.homepage     = "https://github.com/YinJone/HuangQiSDK"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author       = { "Jone.yin" => "yin_jone@163.com" }
s.ios.deployment_target = '9.0'
s.vendored_framework = 'HuangQiSDK.framework'
s.frameworks = "Foundation"
s.swift_version = '3.2'
s.requires_arc = true
s.source = { git: 'https://github.com/YinJone/HuangQiSDK.git', :tag => s.version}

s.dependency 'GFonSDKConnect', '1.0.3'

s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2", "OTHER_LDFLAGS" => "-ObjC -lxml2" }

end