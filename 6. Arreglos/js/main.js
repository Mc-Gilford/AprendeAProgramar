var items = [
    [1, 2],
    [3, 4],
    [5, 6]
  ];
  print(items[0][0]); // 1
  print(items);
  
  var x = new Array(3);
  
  for (var i = 0; i < x.length; i++) {
    x[i] = new Array(3);
  }
  
  var cont=0;
  for(var i=0; i<x.length;i++)
      for(var j=0; j <x[i].length;j++)
      {
          x[i][j]=cont;
          print(x[i][j]);
          cont++;
      }
  print(x);