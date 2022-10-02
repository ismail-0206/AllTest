import PySimpleGUIQt as sg
#s.preview_all_look_and_feel_themes()

ly=[
    
    [sg.Text("Hello World!")],
    [sg.Button("!Hello World!"),sg.Button("Hello World!")]

]
window = sg.Window(title="Python GUI Test", size=(640,480), layout=ly)

window.read()