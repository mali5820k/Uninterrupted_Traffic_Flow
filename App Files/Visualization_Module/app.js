const scene = new THREE.Scene;
//                                        FOV, Aspect ratio,                       near clip, far clip
const camera = new THREE.PerspectiveCamera(75, window.innerWidth / window.innerHeight, 0.1, 1000);
const renderer = new THREE.WebGLRenderer(); // This can be changed for multiple types of renderers

renderer.setSize(window.innerWidth, window.innerHeight);
document.body.appendChilde(renderer.domElement);

// Creating a 3D Object
const geometry = new THREE.BoxGeometry(); // Contains the verticies and faces of a cube
const material = new THREE.MeshBasicMaterial( {color: 0x00ff00 } ); // Material for the cube

const cube = new THREE.Mesh( geometry, material ); // Generate a mesh that stores data in geometry and uses material
scene.add( cube ); // Add the cube to our scene.

// Setting the camera position
camera.position.z = 5;

function animate() {
    requestAnimationFrame( animate );

    // Animations that we want our 3D objects or camera to act out
    cube.rotation.x += 0.01;
    cube.rotation.y += 0.01;

    renderer.render( scene, camera );
}

animate();