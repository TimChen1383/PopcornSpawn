# Popcorn Spawn

Plugin
- place “Popcorn” folder under UE’s Plugins folder

Popcorn Spawn Target BP Actor
- Place “Popcorn Spawn Target” actor in the level
- Assign a mesh to Hit Target of this actor in details panel as the symbol of the target
- Adjust the Sphere Radius of Hit Detection in the details panel as it control the radius of hit detect range
- Drag the Spawn Place to a location you want as this will be the place that popcorn spawn
- Assigned “Popcorn Spawn” actor to the Modular Spawn Actor in the details panel

Popcorn Spawn BP Actor
- No need to be placed in the level
- Adjust Impulse Strength in this BP you can control the explosion strength when popcorn birth

Popcorn Grab BP Component
- Add a First Person Feature pack to you project (UE default feature) and use it as your default player (you can use your custom player as well)
- Attach this component under your player
- Use this component to call GrabObject function and ReleaseObject function in player BP
- Create a keyboard input. Set GrabObject to input pressed and set ReleaseObject to input released (I use right mouse button in this example)
- Assign BP_Radial Force to BPRadial Force in details panel

Play
- When Popcorn Spawn Target get hit by the bullet (hit event not overlap event), the popcorn spawn effect should start
- Use the keyboard input you have set in the player to grab the popcorns
 
