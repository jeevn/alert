# alert
max external for obtrusive messages

## Description

Messages are rendered as popup dialogs, or optionally patcher banners. Note that commas and semicolons are not permitted because of Max’s messaging syntax. (Commas will separate messages.)

## Installation

Only the Mac build is provided. To install, download and place the entire repository folder in your *Packages* folder, or your *Library* folder, and restart Max. N.B. it may be buggy.

## Building

This uses the [old Max SDK](http://github.com/Cycling74/max-sdk), and the Xcode project should build out-of-the-box if the `alert/source/` is moved so that it is adjacent to the `c74support/` folder. Anyone willing to build a Windows version is more than welcome to fork and send me PRs. (The reason this uses the legacy SDK rather than the new (Max 7) API is that `ouchstring()` method appears no longer to be supported by the latter.)

## Licence

Use of this external is governed by the MIT License as stated in the accompanying [LICENSE.md](license.md) file.
