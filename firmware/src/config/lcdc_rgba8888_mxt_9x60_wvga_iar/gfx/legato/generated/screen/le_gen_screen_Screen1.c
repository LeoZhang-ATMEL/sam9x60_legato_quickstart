#include "gfx/legato/generated/screen/le_gen_screen_Screen1.h"

// screen member widget declarations
static leWidget* root0;

leImageWidget* Screen1_ImageWidget0;
leButtonWidget* Screen1_ButtonWidget0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Screen1(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Screen1(void)
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

    Screen1_ImageWidget0 = leImageWidget_New();
    Screen1_ImageWidget0->fn->setPosition(Screen1_ImageWidget0, 0, 0);
    Screen1_ImageWidget0->fn->setSize(Screen1_ImageWidget0, 800, 480);
    Screen1_ImageWidget0->fn->setBorderType(Screen1_ImageWidget0, LE_WIDGET_BORDER_NONE);
    Screen1_ImageWidget0->fn->setImage(Screen1_ImageWidget0, (leImage*)&Image0);
    root0->fn->addChild(root0, (leWidget*)Screen1_ImageWidget0);

    Screen1_ButtonWidget0 = leButtonWidget_New();
    Screen1_ButtonWidget0->fn->setPosition(Screen1_ButtonWidget0, 110, 267);
    Screen1_ButtonWidget0->fn->setSize(Screen1_ButtonWidget0, 164, 65);
    Screen1_ButtonWidget0->fn->setString(Screen1_ButtonWidget0, (leString*)&string_Smart);
    Screen1_ButtonWidget0->fn->setPressedEventCallback(Screen1_ButtonWidget0, event_Screen1_ButtonWidget0_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Screen1_ButtonWidget0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen1(void)
{
}

void screenHide_Screen1(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen1_ImageWidget0 = NULL;
    Screen1_ButtonWidget0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Screen1(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Screen1(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

