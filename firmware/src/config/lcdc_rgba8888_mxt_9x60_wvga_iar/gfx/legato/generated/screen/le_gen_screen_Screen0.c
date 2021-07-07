#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;
static leWidget* root1;

leImageWidget* Screen0_ImageWidget0;
leButtonWidget* Screen0_ButtonWidget0;
leButtonWidget* Screen0_ButtonWidget1;
leImageWidget* Screen0_ImageWidget1;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Screen0(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Screen0(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 800, 480);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 800, 480);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_ImageWidget0 = leImageWidget_New();
    Screen0_ImageWidget0->fn->setPosition(Screen0_ImageWidget0, 0, 0);
    Screen0_ImageWidget0->fn->setSize(Screen0_ImageWidget0, 800, 480);
    Screen0_ImageWidget0->fn->setBorderType(Screen0_ImageWidget0, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget0->fn->setImage(Screen0_ImageWidget0, (leImage*)&Image0);
    root1->fn->addChild(root1, (leWidget*)Screen0_ImageWidget0);

    Screen0_ButtonWidget0 = leButtonWidget_New();
    Screen0_ButtonWidget0->fn->setPosition(Screen0_ButtonWidget0, 50, 95);
    Screen0_ButtonWidget0->fn->setSize(Screen0_ButtonWidget0, 215, 63);
    Screen0_ButtonWidget0->fn->setString(Screen0_ButtonWidget0, (leString*)&string_Easy);
    Screen0_ButtonWidget0->fn->setPressedEventCallback(Screen0_ButtonWidget0, event_Screen0_ButtonWidget0_OnPressed);
    root1->fn->addChild(root1, (leWidget*)Screen0_ButtonWidget0);

    Screen0_ButtonWidget1 = leButtonWidget_New();
    Screen0_ButtonWidget1->fn->setPosition(Screen0_ButtonWidget1, 402, 367);
    Screen0_ButtonWidget1->fn->setSize(Screen0_ButtonWidget1, 397, 111);
    Screen0_ButtonWidget1->fn->setBackgroundType(Screen0_ButtonWidget1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget1->fn->setPressedImage(Screen0_ButtonWidget1, (leImage*)&fan_auto);
    Screen0_ButtonWidget1->fn->setReleasedImage(Screen0_ButtonWidget1, (leImage*)&fan_auto);
    Screen0_ButtonWidget1->fn->setPressedEventCallback(Screen0_ButtonWidget1, event_Screen0_ButtonWidget1_OnPressed);
    Screen0_ButtonWidget1->fn->setReleasedEventCallback(Screen0_ButtonWidget1, event_Screen0_ButtonWidget1_OnReleased);
    root1->fn->addChild(root1, (leWidget*)Screen0_ButtonWidget1);

    Screen0_ImageWidget1 = leImageWidget_New();
    Screen0_ImageWidget1->fn->setPosition(Screen0_ImageWidget1, 645, 91);
    Screen0_ImageWidget1->fn->setBackgroundType(Screen0_ImageWidget1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget1->fn->setBorderType(Screen0_ImageWidget1, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget1->fn->setImage(Screen0_ImageWidget1, (leImage*)&up);
    root1->fn->addChild(root1, (leWidget*)Screen0_ImageWidget1);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen0(void)
{
}

void screenHide_Screen0(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    Screen0_ImageWidget0 = NULL;
    Screen0_ButtonWidget0 = NULL;
    Screen0_ButtonWidget1 = NULL;
    Screen0_ImageWidget1 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Screen0(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Screen0(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        case 1:
        {
            return root1;
        }
        default:
        {
            return NULL;
        }
    }
}

