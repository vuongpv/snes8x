﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "SelectStatePane.xaml.h"




void ::Win8Snes9x::SelectStatePane::InitializeComponent()
{
    if (_contentLoaded)
        return;

    _contentLoaded = true;

    // Call LoadComponent on ms-appx:///SelectStatePane.xaml
    ::Windows::UI::Xaml::Application::LoadComponent(this, ref new ::Windows::Foundation::Uri(L"ms-appx:///SelectStatePane.xaml"), ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);

    // Get the ListBox named 'savestateList'
    savestateList = safe_cast<::Windows::UI::Xaml::Controls::ListBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"savestateList"));
}

void ::Win8Snes9x::SelectStatePane::Connect(int connectionId, Platform::Object^ target)
{
    switch (connectionId)
    {
    case 1:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::Selector^>(target))->SelectionChanged +=
            ref new ::Windows::UI::Xaml::Controls::SelectionChangedEventHandler(this, (void (::Win8Snes9x::SelectStatePane::*)(Platform::Object^, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^))&SelectStatePane::savestateList_SelectionChanged);
        break;
    }
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}
