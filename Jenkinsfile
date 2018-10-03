library identifier: 'sharedlibs@master', retriever: modernSCM(
    [$class: 'GitSCMSource',
     remote: 'https://github.com/TomOwens321/sharedlibs.git',
     credentialsId: 'me_at_github']
)

node('bbone') {
    stage('Checkout') {
        checkout scm
    }

    stage('Test') {
        sayHello('TomO')
        sh 'build/ardverify.sh'
    }
}
