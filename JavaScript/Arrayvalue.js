const aPublicPosition  = [1,2,1,3,4,2,1,2,4]
const wall = aPublicPosition.filter((p, i) => aPublicPosition.indexOf(p) !== i);

console.log(wall)
